//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface MCMXPCMessageRepairUserData
{
    NSURL *_url;	// 8 = 0x8
    char *_sandboxToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003347d
@property(readonly, nonatomic) char *sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;	// IMP=0x0000000000033381
- (unsigned int)disposition;	// IMP=0x00000000000332f8
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000331b4

@end

