//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSCurrentBundleProxyQuery
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000006ca37
+ (double)cacheInterval;	// IMP=0x004000000006c7a9
+ (id)currentBundleProxyQuery;	// IMP=0x004000000006c714
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006ca6e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006ca3f
- (unsigned long long)hash;	// IMP=0x000000000006c9e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006c959
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c7b7

@end

