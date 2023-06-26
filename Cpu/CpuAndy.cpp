#include "CpuAndy.h"

// Extra Sauce
float swapVB = 0;
float *eventViBPointF = nullptr;
void HandleCmd(android_app* _androidApp, int32_t _cmd) {
    if (_cmd == APP_CMD_INIT_WINDOW){
        char pathPointC[256];
        int64_t pathLimitC = 0;
        VeeBeStr((char *)(_androidApp->activity->internalDataPath), pathPointC, &pathLimitC);
        pathPointC[pathLimitC++] = '/';
        BeFilePath(pathPointC, &pathLimitC, 0);
        std::ifstream iStream(pathPointC, std::ios_base::in | std::ios_base::beg);
        if (!iStream.is_open())
            throw -1;
        iStream.seekg(0);
        //region Limit(c)
        float cedLimitDPointF[2];
        iStream.read((char *)cedLimitDPointF, 8);
        //region CedLimitC
        int64_t cedLimitC = (int64_t)cedLimitDPointF[0] + 16777216 * (int64_t)cedLimitDPointF[1];
        float *cedPointF = new float[cedLimitC / 4];
        //endregion
        //endregion
        //region Ced
        iStream.read((char *)cedPointF, (int32_t)cedLimitC);
        iStream.close();
        float *cedCtepF = cedPointF;
        vbcc.VB = 0;
        vbcc.Be(nullptr, cedCtepF);
        vbcc.Vee(nullptr, cedCtepF);
        delete[] cedPointF;
        //endregion
    }
    else if ( _cmd == APP_CMD_DESTROY){
        vbcc.Pec();
    }
    else if (eventViBPointF != nullptr){
        BeD(eventViBPointF, _cmd); // *D
    }
}
int32_t OnInputEvent(struct android_app* _app, AInputEvent* _event){
    if (vbcc.VB > 0){

        if (AInputEvent_getType(_event) == AINPUT_EVENT_TYPE_MOTION){
            size_t touchLimit = AMotionEvent_getPointerCount(_event);
            size_t touchCtep = 0;
            while (touchCtep < touchLimit){
                int32_t touch = AMotionEvent_getPointerId(_event, touchCtep);
                int32_t action = AMotionEvent_getAction(_event);
                float touchViB = 0;
                float x = 0;
                float y = 0;
                if (action == AMOTION_EVENT_ACTION_MOVE){
                    //region Motion
                    touchViB = 2;
                    x = AMotionEvent_getX(_event, touchCtep);
                    y = AMotionEvent_getY(_event, touchCtep);
                    //endregion
                }
                else if (action == AMOTION_EVENT_ACTION_DOWN || action == AMOTION_EVENT_ACTION_POINTER_DOWN){
                    //region Touch
                    touchViB = 1;
                    x = AMotionEvent_getX(_event, touchCtep);
                    y = AMotionEvent_getY(_event, touchCtep);
                    //endregion
                }
                else if (action == AMOTION_EVENT_ACTION_UP || action == AMOTION_EVENT_ACTION_POINTER_UP){
                    //region UnTouch
                    touchViB = -1;
                    //endregion
                }

                //region CpuCyn
                int64_t cpuCynCtep = 0;
                int64_t cpuCynLimit = vbcc.cpuCynLimit;
                while (cpuCynCtep < cpuCynLimit){
                    CpuCyn *cpuCyn = vbcc.cpuCync + cpuCynCtep;
                    if (touch == cpuCyn->touch){
                        cpuCyn->touchViB = touchViB;
                        cpuCyn->x = x;
                        cpuCyn->y = y;
                    }
                    ++cpuCynCtep;
                }
                //endregion

                ++touchCtep;
            }
        }
    }
    return 0;
}

CpuCoul *androidMainCpuCoul = nullptr;
void android_main(struct android_app* _androidApp) {

    JNIEnv* env{};
    _androidApp->activity->vm->AttachCurrentThread(&env, NULL);

    jclass activityClass = env->FindClass("android/app/NativeActivity");
    jmethodID getWindow = env->GetMethodID(activityClass, "getWindow", "()Landroid/view/Window;");

    jclass windowClass = env->FindClass("android/view/Window");
    jmethodID getDecorView = env->GetMethodID(windowClass, "getDecorView", "()Landroid/view/View;");

    jclass viewClass = env->FindClass("android/view/View");
    jmethodID setSystemUiVisibility = env->GetMethodID(viewClass, "setSystemUiVisibility", "(I)V");

    jobject window = env->CallObjectMethod(_androidApp->activity->clazz, getWindow);

    jobject decorView = env->CallObjectMethod(window, getDecorView);

    jfieldID flagFullscreenID = env->GetStaticFieldID(viewClass, "SYSTEM_UI_FLAG_FULLSCREEN", "I");
    jfieldID flagHideNavigationID = env->GetStaticFieldID(viewClass, "SYSTEM_UI_FLAG_HIDE_NAVIGATION", "I");
    jfieldID flagImmersiveStickyID = env->GetStaticFieldID(viewClass, "SYSTEM_UI_FLAG_IMMERSIVE_STICKY", "I");

    const int flagFullscreen = env->GetStaticIntField(viewClass, flagFullscreenID);
    const int flagHideNavigation = env->GetStaticIntField(viewClass, flagHideNavigationID);
    const int flagImmersiveSticky = env->GetStaticIntField(viewClass, flagImmersiveStickyID);
    const int flag = flagFullscreen | flagHideNavigation | flagImmersiveSticky;

    env->CallVoidMethod(decorView, setSystemUiVisibility, flag);

    _androidApp->activity->vm->DetachCurrentThread();

    _androidApp->onAppCmd = HandleCmd;
    _androidApp->onInputEvent = OnInputEvent;

    InitVulkan();

    vbcc.Ce();
    vbcc.VB = -1;
    vbcc.androidApp = _androidApp;

    int events;
    android_poll_source* source;
    do {
        if (ALooper_pollAll(1, nullptr, &events, (void**)&source) >= 0) {
            if (source != NULL)
                source->process(_androidApp, source);
        }
        if (swapVB != 0){
            int64_t komaVB = androidMainCpuCoul->veeVB;
            androidMainCpuCoul->veeVB = -1;
            swapVB = 0;
            while (androidMainCpuCoul->VB > 0);
            androidMainCpuCoul->veeVB = komaVB;
            androidMainCpuCoul->VB += 2;
            androidMainCpuCoul->Vee(nullptr, nullPointerF);
            androidMainCpuCoul->VB -= 2;
            androidMainCpuCoul = nullptr;
        }
    } while (vbcc.VB != 0);
}
// Enough Sauce!

void CpuAndy::Ce(){
    VB = 0;
}
void CpuAndy::Be(CpuCoul *_cpuCoul, float *&_ctepF){
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void CpuAndy::Vee(CpuCoul *_cpuCoul, float *&_ctepF){
    float *ctepF = _ctepF;
    try{
        eventViBPointF = _cpuCoul->eoBar.pointCe + VeeD(ctepF); // D

        int32_t eventc;
        android_poll_source* corc;
        if (ALooper_pollAll(0, nullptr, &eventc, (void **) &corc) >= 0) {
            if (corc != NULL)
                corc->process(vbcc.androidApp, corc);
        }

        _ctepF = ctepF;
    }
    catch (...){
        _ctepF = ctepF;
        throw ExtraSauce("Error :: CpuAndy:Vee");
    }
}
void CpuAndy::Pec(){
}