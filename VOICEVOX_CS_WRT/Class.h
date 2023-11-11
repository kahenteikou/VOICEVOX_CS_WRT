#pragma once

#include "Class.g.h"

namespace winrt::VOICEVOX_CS_WRT::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::VOICEVOX_CS_WRT::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
