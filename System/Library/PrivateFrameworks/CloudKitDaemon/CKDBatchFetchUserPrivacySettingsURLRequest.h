//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSArray *_containerPrivacySettings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000213e6c
@property(retain, nonatomic) NSArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000213cfe
- (id)generateRequestOperations;	// IMP=0x0000000000213c30
- (_Bool)requiresTokenRegistration;	// IMP=0x0000000000213c28
- (id)requestOperationClasses;	// IMP=0x0000000000213bbc
- (long long)databaseScope;	// IMP=0x0000000000213bb1
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x0000000000213b82

@end

