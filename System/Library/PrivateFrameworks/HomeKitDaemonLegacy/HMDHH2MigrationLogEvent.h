//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHH2MigrationLogEvent : HMMLogEvent
{
    _Bool _autoMigration;	// 8 = 0x8
    _Bool _dryRun;	// 9 = 0x9
    _Bool _migrationSuccessful;	// 10 = 0xa
    double _totalTimeTakenForMigration;	// 16 = 0x10
    long long _migrationAttempt;	// 24 = 0x18
    NSString *_failureReason;	// 32 = 0x20
    NSString *_coreDataValidationEntityClassName;	// 40 = 0x28
    NSString *_coreDataValidationAttributeName;	// 48 = 0x30
    NSString *_localizedErrorDescription;	// 56 = 0x38
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;	// IMP=0x00100000005e6267
- (void).cxx_destruct;	// IMP=0x00000000005e6214
@property(readonly, nonatomic) NSString *localizedErrorDescription; // @synthesize localizedErrorDescription=_localizedErrorDescription;
@property(readonly, nonatomic) NSString *coreDataValidationAttributeName; // @synthesize coreDataValidationAttributeName=_coreDataValidationAttributeName;
@property(readonly, nonatomic) NSString *coreDataValidationEntityClassName; // @synthesize coreDataValidationEntityClassName=_coreDataValidationEntityClassName;
@property(readonly, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(readonly, nonatomic) long long migrationAttempt; // @synthesize migrationAttempt=_migrationAttempt;
@property(readonly, nonatomic, getter=isMigrationSuccessful) _Bool migrationSuccessful; // @synthesize migrationSuccessful=_migrationSuccessful;
@property(readonly, nonatomic) double totalTimeTakenForMigration; // @synthesize totalTimeTakenForMigration=_totalTimeTakenForMigration;
@property(readonly, nonatomic, getter=isDryRun) _Bool dryRun; // @synthesize dryRun=_dryRun;
@property(readonly, nonatomic, getter=isAutoMigration) _Bool autoMigration; // @synthesize autoMigration=_autoMigration;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithAutoMigration:(_Bool)arg1 isDryRun:(_Bool)arg2 migrationSuccessful:(_Bool)arg3 totalMigrationTime:(long long)arg4 totalMigrationAttempt:(long long)arg5 migrationError:(id)arg6 failureReason:(id)arg7 coreDataValidationEntityClassName:(id)arg8 coreDataValidationAttributeName:(id)arg9 localizedErrorDescription:(id)arg10;	// IMP=0x00000000005e5d1b

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

