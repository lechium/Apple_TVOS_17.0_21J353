//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

__attribute__((visibility("hidden")))
@interface HMDMRAVEndpoint : HMFObject
{
    void *_mravEndpoint;	// 8 = 0x8
}

@property(readonly, nonatomic) void *mravEndpoint; // @synthesize mravEndpoint=_mravEndpoint;
- (id)attributeDescriptions;	// IMP=0x0000000000518959
- (unsigned long long)hash;	// IMP=0x000000000051893f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000518888
- (void)dealloc;	// IMP=0x0000000000518847
- (id)initWithMRAVEndpoint:(void *)arg1;	// IMP=0x00000000005187e0

@end

