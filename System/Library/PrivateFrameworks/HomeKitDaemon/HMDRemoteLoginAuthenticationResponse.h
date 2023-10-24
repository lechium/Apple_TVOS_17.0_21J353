//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMRemoteLoginMessage.h>

@class ACAccount, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginAuthenticationResponse : HMRemoteLoginMessage
{
    ACAccount *_loggedInAccount;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x00100000003e3925
+ (id)messageName;	// IMP=0x00100000003e3918
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003e3910
+ (id)objWithMessage:(id)arg1;	// IMP=0x00100000003e3779
+ (id)objWithDict:(id)arg1;	// IMP=0x00100000003e3600
- (void).cxx_destruct;	// IMP=0x00000000003e35ed
@property(retain, nonatomic) ACAccount *loggedInAccount; // @synthesize loggedInAccount=_loggedInAccount;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e352d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003e3448
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
