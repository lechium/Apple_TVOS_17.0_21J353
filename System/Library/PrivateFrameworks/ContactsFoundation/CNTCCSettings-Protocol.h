//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTCCAppAuthorizationRecord, NSArray, NSString;

@protocol CNTCCSettings
- (void)saveAuthorizationRecord:(CNTCCAppAuthorizationRecord *)arg1;
- (CNTCCAppAuthorizationRecord *)authorizationRecordForBundleIdentifier:(NSString *)arg1;
- (NSArray *)authorizationRecords;
@end

