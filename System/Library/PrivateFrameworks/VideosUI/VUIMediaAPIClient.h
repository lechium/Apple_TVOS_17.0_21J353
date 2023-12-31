//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMediaTokenService, AMSURLSession, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaAPIClient : NSObject
{
    AMSURLSession *_session;	// 8 = 0x8
    AMSMediaTokenService *_tokenService;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0060000000138123
+ (id)getPlatformClientIdentifier;	// IMP=0x0060000000138116
+ (void)initializeWithAppleTVClientIdentifier;	// IMP=0x0060000000138025
- (void).cxx_destruct;	// IMP=0x00000000001387d5
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) AMSMediaTokenService *tokenService; // @synthesize tokenService=_tokenService;
@property(retain, nonatomic) AMSURLSession *session; // @synthesize session=_session;
- (id)_createTokenServiceWithSession:(id)arg1;	// IMP=0x00000000001386bf
- (id)_createSession;	// IMP=0x00000000001385bc
- (void)fetchContentForUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001381ec
- (id)initWithClientIdentifier:(id)arg1;	// IMP=0x0000000000138167

@end

