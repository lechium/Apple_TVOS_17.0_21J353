//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPContext, NSArray, NSDictionary, NSString, OTConfigurationContext, OTEscrowRecord;

@protocol CDPDOctagonTrustProxy <NSObject>
+ (_Bool)octagonIsSOSFeatureEnabled;
@property(retain, nonatomic) CDPContext *cdpContext;
- (_Bool)registerRecoveryKey:(NSString *)arg1 error:(id *)arg2;
- (_Bool)cacheRecoveryKey:(NSString *)arg1 forAltDSID:(NSString *)arg2 error:(id *)arg3;
- (_Bool)isRecoveryKeySet:(OTConfigurationContext *)arg1 error:(id *)arg2;
- (_Bool)disableRecoveryKey:(id *)arg1;
- (NSArray *)tlkRecoverabilityForEscrow:(NSDictionary *)arg1 record:(OTEscrowRecord *)arg2 source:(long long)arg3 error:(id *)arg4;
- (NSArray *)tlkRecoverabilityForEscrow:(NSDictionary *)arg1 record:(OTEscrowRecord *)arg2 error:(id *)arg3;
- (NSArray *)fetchAllEscrowRecords:(NSDictionary *)arg1 source:(long long)arg2 error:(id *)arg3;
- (NSArray *)fetchAllEscrowRecords:(NSDictionary *)arg1 forceFetch:(_Bool)arg2 error:(id *)arg3;
- (NSArray *)fetchEscrowRecords:(NSDictionary *)arg1 source:(long long)arg2 error:(id *)arg3;
- (NSArray *)fetchEscrowRecords:(NSDictionary *)arg1 forceFetch:(_Bool)arg2 error:(id *)arg3;
- (id)initWithContext:(CDPContext *)arg1;
@end

