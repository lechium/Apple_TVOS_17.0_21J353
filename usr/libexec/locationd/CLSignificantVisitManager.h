//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLSettingsMirror, NSMutableArray, NSString;
@protocol CLClientAuthorizationCacheProtocol, CLClientManagerPublicProtocol, CLRoutineMonitorServiceProtocol;

@interface CLSignificantVisitManager : CLIntersiloService
{
    struct unique_ptr<CLClientManager_Type::Client, std::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 8 = 0x8
    struct map<id<CLSignificantVisitManagerClientProtocol>, NSString *, std::less<id<CLSignificantVisitManagerClientProtocol>>, std::allocator<std::pair<const id<CLSignificantVisitManagerClientProtocol>, NSString *>>> _clientToKey;	// 16 = 0x10
    CLSettingsMirror *fSettings;	// 40 = 0x28
    _Bool _monitoring;	// 48 = 0x30
    _Bool _leeching;	// 49 = 0x31
    _Bool _armed;	// 50 = 0x32
    void *_clientInterest;	// 56 = 0x38
    void *_clientAuthDate;	// 64 = 0x40
    id <CLClientAuthorizationCacheProtocol> _clientAuthorizationCache;	// 72 = 0x48
    NSMutableArray *_recentVisits;	// 80 = 0x50
    id <CLRoutineMonitorServiceProtocol> _routineMonitor;	// 88 = 0x58
    id <CLClientManagerPublicProtocol> _clientManager;	// 96 = 0x60
    unsigned long long _currentJournalIdentifier;	// 104 = 0x68
}

+ (_Bool)isSupported;	// IMP=0x002000000046af19
+ (id)getSilo;	// IMP=0x001000000046aebd
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000046aea4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000046ae47
- (id).cxx_construct;	// IMP=0x002000000046fdb5
- (void).cxx_destruct;	// IMP=0x001000000046fd6d
@property(nonatomic) unsigned long long currentJournalIdentifier; // @synthesize currentJournalIdentifier=_currentJournalIdentifier;
@property(nonatomic) _Bool armed; // @synthesize armed=_armed;
@property(retain, nonatomic) id <CLClientManagerPublicProtocol> clientManager; // @synthesize clientManager=_clientManager;
@property(retain, nonatomic) id <CLRoutineMonitorServiceProtocol> routineMonitor; // @synthesize routineMonitor=_routineMonitor;
@property(retain, nonatomic) NSMutableArray *recentVisits; // @synthesize recentVisits=_recentVisits;
@property(retain, nonatomic) id <CLClientAuthorizationCacheProtocol> clientAuthorizationCache; // @synthesize clientAuthorizationCache=_clientAuthorizationCache;
@property(nonatomic) void *clientAuthDate; // @synthesize clientAuthDate=_clientAuthDate;
@property(nonatomic) void *clientInterest; // @synthesize clientInterest=_clientInterest;
@property(nonatomic) _Bool leeching; // @synthesize leeching=_leeching;
@property(nonatomic) _Bool monitoring; // @synthesize monitoring=_monitoring;
- (void)settingsDidChange:(id)arg1;	// IMP=0x001000000046f93e
- (void)onAuthDateStoreTimer;	// IMP=0x001000000046f8fd
- (void)onInterestStoreTimer;	// IMP=0x001000000046f8bc
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x001000000046f5f5
- (void)onVisit:(id)arg1;	// IMP=0x001000000046f3f8
- (_Bool)clientInterestStoreSetValueForClientKey:(const char *)arg1 parameterKey:(const char *)arg2 value:(int)arg3;	// IMP=0x001000000046f32c
- (_Bool)clientInterestStoreGetValueForClientKey:(const char *)arg1 parameterKey:(const char *)arg2 value:(int *)arg3;	// IMP=0x001000000046f27b
- (_Bool)interestTypeForClientKey:(const char *)arg1 outType:(int *)arg2;	// IMP=0x001000000046f225
- (_Bool)interestForClientKey:(const char *)arg1 outInterest:(int *)arg2;	// IMP=0x001000000046f1cf
- (void)migrateClientInterestData;	// IMP=0x001000000046ebee
- (void)checkForMonitoring;	// IMP=0x001000000046e4d8
- (id)authorizationDateForClientWithKey:(id)arg1;	// IMP=0x001000000046e285
- (void)notifyClientsOfVisit:(id)arg1;	// IMP=0x001000000046dcf3
- (void)disconnectClient:(byref id)arg1;	// IMP=0x001000000046dc49
- (void)simulateVisit:(id)arg1;	// IMP=0x001000000046db83
- (void)actOnPendingDeleteForClientKey:(id)arg1;	// IMP=0x001000000046d995
- (void)removeInterestForClientKey:(id)arg1;	// IMP=0x001000000046d8e5
- (void)stopMonitoringSignificantVisitsForClient:(byref id)arg1;	// IMP=0x001000000046d6c1
- (void)startMonitoringSignificantVisitsForClient:(byref id)arg1 type:(int)arg2;	// IMP=0x001000000046d2ee
- (void)connectClient:(byref id)arg1 withKey:(id)arg2;	// IMP=0x001000000046d155
- (id)keyForClient:(byref id)arg1;	// IMP=0x001000000046d0bf
- (void)performBlockWhenArmed:(CDUnknownBlockType)arg1;	// IMP=0x001000000046d047
- (void)deliverVisit:(id)arg1 toClient:(byref id)arg2;	// IMP=0x001000000046cbc9
- (void)sendVisitsToClient:(byref id)arg1;	// IMP=0x001000000046c7ed
- (_Bool)isClientWithKeyInterested:(id)arg1;	// IMP=0x001000000046c619
- (void)removeOldVisits;	// IMP=0x001000000046c4bc
- (void)ensureStop;	// IMP=0x001000000046c181
- (void)ensureMonitoringWithType:(int)arg1;	// IMP=0x001000000046bd56
- (void)flushAll;	// IMP=0x001000000046bd28
- (void)flushInterest;	// IMP=0x001000000046bbd6
- (void)flushAuthDates;	// IMP=0x001000000046ba84
- (void)endService;	// IMP=0x001000000046b8d8
- (void)beginService;	// IMP=0x001000000046af5e
- (id)init;	// IMP=0x001000000046af21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

