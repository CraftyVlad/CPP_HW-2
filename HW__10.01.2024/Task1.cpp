#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class HotkeyManager {
private:
    map<string, string> hotkeys;

public:
    void addHotkey(const string& hotkey, const string& command) {
        hotkeys[hotkey] = command;
    }

    void removeHotkey(const string& hotkey) {
        hotkeys.erase(hotkey);
    }

    string findCommand(const string& hotkey) {
        if (hotkeys.find(hotkey) != hotkeys.end()) {
            return hotkeys[hotkey];
        }
        else {
            return "Command not found";
        }
    }

    vector<string> findHotkeysByCommand(const string& command) {
        vector<string> result;
        for (const auto& pair : hotkeys) {
            if (pair.second == command) {
                result.push_back(pair.first);
            }
        }
        return result;
    }

    void clearAllHotkeys() {
        hotkeys.clear();
    }

    vector<string> findConflictingHotkeys(const HotkeyManager& other) {
        vector<string> result;
        for (const auto& pair : hotkeys) {
            if (other.hotkeys.find(pair.first) != other.hotkeys.end()) {
                result.push_back(pair.first);
            }
        }
        return result;
    }
};

int main() {
    HotkeyManager manager;

    manager.addHotkey("Ctrl+C", "copy");
    manager.addHotkey("Ctrl+V", "paste");
    manager.addHotkey("Ctrl+X", "cut");

    cout << "Command for Ctrl+C: " << manager.findCommand("Ctrl+C") << endl;

    vector<string> copyHotkeys = manager.findHotkeysByCommand("copy");
    cout << "Hotkeys for copy command: ";
    for (const auto& hotkey : copyHotkeys) {
        cout << hotkey << " ";
    }
    cout << endl;

    manager.removeHotkey("Ctrl+V");

    HotkeyManager anotherManager;
    anotherManager.addHotkey("Ctrl+V", "select all");

    vector<string> conflicts = manager.findConflictingHotkeys(anotherManager);
    if (!conflicts.empty()) {
        cout << "Conflicting hotkeys: ";
        for (const auto& hotkey : conflicts) {
            cout << hotkey << " ";
        }
        cout << endl;
    }
    else {
        cout << "No conflicting hotkeys found." << endl;
    }

    manager.clearAllHotkeys();

    return 0;
}
