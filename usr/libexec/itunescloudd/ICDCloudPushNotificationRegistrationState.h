//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICDCloudPushNotificationRegistrationState : NSObject
{
    NSMutableDictionary *_accountRegistrationStates;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000ffd2e
- (void)setRegistrationState:(id)arg1 forAccountDSID:(id)arg2;	// IMP=0x00100000000ffd18
- (id)registrationStateForAccountDSID:(id)arg1;	// IMP=0x00100000000ffd02
- (id)dictionaryRepresentation;	// IMP=0x00100000000ffc07
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000ffaec

@end

