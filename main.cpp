#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include "VeyronStudio.hpp"

using namespace geode::prelude;

class $modify(VeyronMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto menu = this->getChildByID("right-menu");
        if (menu) {
            auto tex = CCSprite::createWithSpriteFrameName("GJ_optionsBtn_001.png");
            if (!tex) tex = CCSprite::create("GJ_button_01.png");
            
            auto btn = CCMenuItemSpriteExtra::create(
                tex,
                this,
                menu_selector(VeyronMenuLayer::onVeyronStudio)
            );
            btn->setID("veyron-studio-button"_spr);
            menu addChild(btn);
            menu->updateLayout();
        }
        return true;
    }

    void onVeyronStudio(CCObject*) {
        FLAlertLayer::create(
            "Veyron Studio",
            "Veyron Studio v1.0.0 initialized successfully. Professional IDE suite ready.",
            "OK"
        )->show();
    }
};
