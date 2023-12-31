//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCProfile;

@interface MCDNSProxyPayloadHandler
{
    MCProfile *_profile;	// 32 = 0x20
}

+ (id)internalErrorWithUnderlyingError:(id)arg1;	// IMP=0x0040000000011d08
+ (id)internalError;	// IMP=0x0010000000011cf4
- (void).cxx_destruct;	// IMP=0x0020000000011dc7
- (void)remove;	// IMP=0x0010000000011dc1
- (void)unsetAside;	// IMP=0x0010000000011dbb
- (void)setAside;	// IMP=0x0010000000011db5
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000011dad
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x0010000000011c65

@end

