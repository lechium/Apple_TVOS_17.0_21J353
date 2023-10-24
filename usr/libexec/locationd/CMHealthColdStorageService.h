//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class MISSING_TYPE, NSString;

@interface CMHealthColdStorageService : CLIntersiloService
{
    struct unique_ptr<CMHealthColdStorageManager, std::default_delete<CMHealthColdStorageManager>> fManager;	// 8 = 0x8
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::default_delete<CLDataProtectionManager_Type::Client>> fDataProtectionClient;	// 16 = 0x10
}

+ (_Bool)isSupported;	// IMP=0x0020000000a4ec85
+ (id)getSilo;	// IMP=0x0010000000a4ebec
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a4ebd3
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a4eb76
- (id).cxx_construct;	// IMP=0x0020000000a5094e
- (void).cxx_destruct;	// IMP=0x0010000000a50910
- (_Bool)checkDeferral:(id)arg1;	// IMP=0x0010000000a50487
- (void)performSyncWithCompletion:(CDUnknownBlockType)arg1 activity:(id)arg2;	// IMP=0x0010000000a5035c
- (void)onSyncActivity:(id)arg1;	// IMP=0x0010000000a4fb80
- (void)setupSyncActivity;	// IMP=0x0010000000a4f6d4
- (MISSING_TYPE *)addClassCDbToColdStorage:name:withDelegate: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000a4f6bc
- (void)addClassBDbToColdStorage:(id)arg1 name:(id)arg2 withDelegate:(id)arg3;	// IMP=0x0010000000a4f6a1
- (void)addDbToColdStorage:(id)arg1 name:(id)arg2 classB:(_Bool)arg3 withDelegate:(id)arg4;	// IMP=0x0010000000a4f323
- (void)onDataProtectionNotification:(const int *)arg1 data:(const NotificationData_6933e140 *)arg2;	// IMP=0x0010000000a4f138
- (void)endService;	// IMP=0x0010000000a4ef89
- (void)beginService;	// IMP=0x0010000000a4eccb
- (id)init;	// IMP=0x0010000000a4ec48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
