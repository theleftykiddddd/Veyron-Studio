#pragma once
#include <Geode/Geode.hpp>
#include <string>
#include <vector>
#include <map>

namespace Veyron {
    struct LevelStats {
        std::string levelName;
        int objectCount;
        int triggerCount;
        int groupCount;
        int colorCount;
        int warningCount;
        int errorCount;
        double currentFPS;
    };

    class StudioManager {
    public:
        static StudioManager& get();
        LevelStats getCurrentStats() const;
        void analyzeCurrentLevel();
    };
}
