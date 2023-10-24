//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface MCMCommandContainerFromPath
{
    NSURL *_url;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x001000000006d27a
+ (unsigned long long)command;	// IMP=0x001000000006d244
- (void).cxx_destruct;	// IMP=0x000000000006d115
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (struct container_object_s *)_containerFromRelayToDaemonWithURL:(id)arg1 relativePath:(char **)arg2 error:(struct container_error_extended_s **)arg3;	// IMP=0x000000000006ce12
- (void)execute;	// IMP=0x000000000006c2cf
- (_Bool)preflightClientAllowed;	// IMP=0x000000000006c1e0
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000006c124

@end
