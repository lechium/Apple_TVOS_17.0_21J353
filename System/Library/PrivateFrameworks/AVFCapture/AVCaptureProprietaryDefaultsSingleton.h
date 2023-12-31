//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureProprietaryDefaultsSingleton : NSObject
{
    char *_proprietaryDefaultsSourceQueueLabel;	// 8 = 0x8
    unsigned long long _proprietaryDefaultsSourceQueueLabelLength;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_proprietaryDefaultsSourceQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_proprietaryDefaultChangeNotificationCallbackQueue;	// 32 = 0x20
    struct OpaqueFigCaptureSource *_proprietaryDefaultsSource;	// 40 = 0x28
    AVWeakReference *_weakReference;	// 48 = 0x30
    NSMutableDictionary *_defaultChangedHandlersForObserversForKeys;	// 56 = 0x38
    NSMutableArray *_keyObservationsThatFailedToRegisterWithServer;	// 64 = 0x40
}

+ (id)cameraHistoryDownplayOverrideList;	// IMP=0x006000000000e3cc
+ (void)updateCameraOverrideHistory:(id)arg1 withCameraInfo:(id)arg2 setOverride:(_Bool)arg3;	// IMP=0x006000000000e380
+ (void)updateCameraHistory:(id)arg1 withCameraInfo:(id)arg2 maxLength:(unsigned long long)arg3 updateCameraHistoryDownplayOverrideList:(_Bool)arg4 cameraCanBeInOverrideList:(_Bool)arg5;	// IMP=0x006000000000e325
+ (id)proprietaryDefaultsDomainForAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x006000000000e2f3
+ (id)proprietaryDefaultsDomainForClient;	// IMP=0x006000000000e2a4
+ (int)retryPriorFailedKeyObservationRegistrations;	// IMP=0x006000000000e272
+ (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x006000000000e22b
+ (id)objectForKey:(id)arg1;	// IMP=0x006000000000e1f3
+ (void)removeObserver:(id)arg1 forKey:(id)arg2;	// IMP=0x006000000000e1ac
+ (void)addObserver:(id)arg1 forKey:(id)arg2 callHandlerForInitialValue:(_Bool)arg3 defaultChangedHandler:(CDUnknownBlockType)arg4;	// IMP=0x006000000000e151
+ (id)proprietaryDefaultsSingleton;	// IMP=0x006000000000e10c
+ (void)initialize;	// IMP=0x006000000000e053
- (void)_runBlockOnProprietaryDefaultsSourceQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fdec
- (void)_handleDefaultChangedNotificationForKey:(id)arg1 newValue:(id)arg2 callHandlersAsync:(_Bool)arg3;	// IMP=0x000000000000faa6
- (void)_handleNotification:(id)arg1 payload:(id)arg2;	// IMP=0x000000000000f9b4
- (void)_updateProprietaryDefaultsSource:(_Bool)arg1;	// IMP=0x000000000000f542
- (id)cameraHistoryDownplayOverrideList;	// IMP=0x000000000000f416
- (void)updateCameraOverrideHistory:(id)arg1 withCameraInfo:(id)arg2 setOverride:(_Bool)arg3;	// IMP=0x000000000000f2db
- (void)updateCameraHistory:(id)arg1 withCameraInfo:(id)arg2 maxLength:(unsigned long long)arg3 updateCameraHistoryDownplayOverrideList:(_Bool)arg4 cameraCanBeInOverrideList:(_Bool)arg5;	// IMP=0x000000000000f184
- (id)proprietaryDefaultsDomainForAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x000000000000f039
- (int)_registerWithServerToObserveKey:(id)arg1;	// IMP=0x000000000000eff0
- (int)retryPriorFailedKeyObservationRegistrations;	// IMP=0x000000000000ec33
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000eb44
- (id)objectForKey:(id)arg1;	// IMP=0x000000000000e9f0
- (void)removeObserver:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000e856
- (void)addObserver:(id)arg1 forKey:(id)arg2 callHandlerForInitialValue:(_Bool)arg3 defaultChangedHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e58e
- (void)dealloc;	// IMP=0x000000000000e51f
- (id)init;	// IMP=0x000000000000e3fe

@end

