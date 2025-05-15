#include <iostream>
#include <string>
using namespace std;

// Base class
class SocialMedia {
protected:
    string userName;
    string profilePicture;
    int followersCount;

public:
    SocialMedia(string name = "", string pic = "default.jpg", int followers = 0)
        : userName(name), profilePicture(pic), followersCount(followers) {}

    void displayBasicProfile() {
        cout << "\n----- Basic Profile -----" << endl;
        cout << "Username: " << userName << endl;
        cout << "Profile Picture: " << profilePicture << endl;
        cout << "Followers: " << followersCount << endl;
    }

    void updateFollowers(int count) {
        followersCount = count;
        cout << "Followers updated to: " << followersCount << endl;
    }

    void display_info() {
        cout << "\n=== Social Media Info ===" << endl;
        cout << "Username: " << userName << endl;
        cout << "Profile Picture: " << profilePicture << endl;
        cout << "Followers Count: " << followersCount << endl;
        cout << "=========================" << endl;
    }
};

// First derived class
class PhotoSection : virtual public SocialMedia {
protected:
    int photoCount;
    string photoAlbums[5];

public:
    PhotoSection(string name = "", string pic = "default.jpg", int followers = 0)
        : SocialMedia(name, pic, followers), photoCount(0) {}

    void uploadPhoto(string albumName) {
        if(photoCount < 5) {
            photoAlbums[photoCount++] = albumName;
            cout << "Photo album uploaded: " << albumName << endl;
        } else {
            cout << "Maximum photo album limit reached!" << endl;
        }
    }

    void displayPhotos() {
        cout << "\n----- Photo Albums -----" << endl;
        if(photoCount == 0) {
            cout << "No photo albums uploaded yet." << endl;
            return;
        }
        for(int i = 0; i < photoCount; i++) {
            cout << (i+1) << ". " << photoAlbums[i] << endl;
        }
    }

    void display_info() {
        cout << "\n=== Photo Section Info ===" << endl;
        cout << "Total Photo Albums: " << photoCount << "/5" << endl;
        cout << "=========================" << endl;
    }
};

// Second derived class
class VideoSection : virtual public SocialMedia {
protected:
    int videoCount;
    string videos[5];

public:
    VideoSection(string name = "", string pic = "default.jpg", int followers = 0)
        : SocialMedia(name, pic, followers), videoCount(0) {}

    void uploadVideo(string videoName) {
        if(videoCount < 5) {
            videos[videoCount++] = videoName;
            cout << "Video uploaded: " << videoName << endl;
        } else {
            cout << "Maximum video limit reached!" << endl;
        }
    }

    void displayVideos() {
        cout << "\n----- Videos -----" << endl;
        if(videoCount == 0) {
            cout << "No videos uploaded yet." << endl;
            return;
        }
        for(int i = 0; i < videoCount; i++) {
            cout << (i+1) << ". " << videos[i] << endl;
        }
    }

    void display_info() {
        cout << "\n=== Video Section Info ===" << endl;
        cout << "Total Videos: " << videoCount << "/5" << endl;
        cout << "=========================" << endl;
    }
};

// Final derived class combining both functionalities
class UserProfile : public PhotoSection, public VideoSection {
public:
    UserProfile(string name, string pic = "default.jpg", int followers = 0)
        : SocialMedia(name, pic, followers),
          PhotoSection(name, pic, followers),
          VideoSection(name, pic, followers) {}

    // This will cause ambiguity if called directly
    void displayFullProfile() {
        // Resolving ambiguity using scope resolution operator
        SocialMedia::display_info();      // Calls base class version
        PhotoSection::display_info();      // Calls PhotoSection version
        VideoSection::display_info();      // Calls VideoSection version
    }

    // Test function to demonstrate ambiguity
    void testAmbiguity() {
        // display_info();  // This would cause compilation error due to ambiguity

        // Correct way to call specific versions:
        cout << "\n=== Testing Different display_info() versions ===" << endl;
        cout << "1. From SocialMedia:" << endl;
        SocialMedia::display_info();

        cout << "\n2. From PhotoSection:" << endl;
        PhotoSection::display_info();

        cout << "\n3. From VideoSection:" << endl;
        VideoSection::display_info();
    }
};

// Main function to test the implementation
int main() {
    UserProfile user("john_doe", "john.jpg", 1000);

    int choice;
    while(true) {
        cout << "\n=== Instagram Profile Management ===" << endl;
        cout << "1. Display Profile" << endl;
        cout << "2. Upload Photo Album" << endl;
        cout << "3. Upload Video" << endl;
        cout << "4. Update Followers" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch(choice) {
            case 1:
                user.displayFullProfile();
                break;
            case 2: {
                string albumName;
                cout << "Enter album name: ";
                cin.ignore();
                getline(cin, albumName);
                user.uploadPhoto(albumName);
                break;
            }
            case 3: {
                string videoName;
                cout << "Enter video name: ";
                cin.ignore();
                getline(cin, videoName);
                user.uploadVideo(videoName);
                break;
            }
            case 4: {
                int followers;
                cout << "Enter new followers count: ";
                cin >> followers;
                user.updateFollowers(followers);
                break;
            }
            case 5:
                cout << "Thank you for using Instagram Profile Management!" << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
