//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLSession;
@protocol AMSMediaTokenServiceProtocol;

__attribute__((visibility("hidden")))
@interface AMSMediaSharedProperties : NSObject
{
    AMSURLSession *_session;	// 8 = 0x8
    id <AMSMediaTokenServiceProtocol> _tokenService;	// 16 = 0x10
}

+ (id)sharedPropertiesMapTable;	// IMP=0x00400000002d665b
+ (id)accessQueue;	// IMP=0x00400000002d65ff
+ (id)_propertiesForClientIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 clientInfo:(id)arg4 URLKnownToBeTrusted:(_Bool)arg5;	// IMP=0x00400000002d61e8
+ (id)propertiesForUserNotificationSettingsTask:(id)arg1;	// IMP=0x00400000002d5f23
+ (id)propertiesForNotificationSettingsTask:(id)arg1;	// IMP=0x00400000002d5e4a
+ (id)propertiesForStorefrontsTask:(id)arg1;	// IMP=0x00400000002d5d95
+ (id)propertiesForRatingsTask:(id)arg1;	// IMP=0x00400000002d5ce0
+ (id)propertiesForMercuryCacheFetchTask:(id)arg1;	// IMP=0x00400000002d5be7
+ (id)propertiesForMediaTask:(id)arg1;	// IMP=0x00400000002d5ad2
+ (id)propertiesForMarketingItemTask:(id)arg1;	// IMP=0x00400000002d59d9
- (void).cxx_destruct;	// IMP=0x00000000002d6776
@property(readonly, nonatomic) id <AMSMediaTokenServiceProtocol> tokenService; // @synthesize tokenService=_tokenService;
@property(readonly, nonatomic) AMSURLSession *session; // @synthesize session=_session;
- (void)dealloc;	// IMP=0x00000000002d66f7
- (id)_initWithClientIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 clientInfo:(id)arg4 URLKnownToBeTrusted:(_Bool)arg5;	// IMP=0x00000000002d601c

@end

