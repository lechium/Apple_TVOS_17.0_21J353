//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, ICConnectionConfiguration, ICDAccountManagerState, ICDAccountManagerStateChange, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface ICDAccountManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    ICDAccountManagerState *_state;	// 24 = 0x18
    ICDAccountManagerStateChange *_stateChange;	// 32 = 0x20
    long long _libraryManagementPolicy;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000118d2f
@property(nonatomic) long long libraryManagementPolicy; // @synthesize libraryManagementPolicy=_libraryManagementPolicy;
@property(copy, nonatomic) ICDAccountManagerStateChange *stateChange; // @synthesize stateChange=_stateChange;
@property(copy, nonatomic) ICDAccountManagerState *state; // @synthesize state=_state;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)_updateStateWithChange:(id)arg1;	// IMP=0x0010000000118c3a
- (id)_buildStateChange;	// IMP=0x0010000000118a33
@property(readonly, copy, nonatomic) ICConnectionConfiguration *activeConfiguration;
@property(readonly, copy, nonatomic) NSArray *supportedConfigurations;
- (void)changeLibraryManagementPolicy:(long long)arg1;	// IMP=0x001000000011845d
- (void)updateState;	// IMP=0x0010000000118251
- (id)initWithLibraryManagementPolicy:(long long)arg1;	// IMP=0x0010000000117fed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

