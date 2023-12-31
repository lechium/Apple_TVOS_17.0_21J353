//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface TVCKStoreContentMetadataCache : NSObject
{
    NSCache *_entriesByAdamID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002e0f9
@property(retain, nonatomic) NSCache *entriesByAdamID; // @synthesize entriesByAdamID=_entriesByAdamID;
- (void)setItem:(id)arg1 forAdamID:(id)arg2 withExpirationDate:(id)arg3;	// IMP=0x000000000002df9e
- (id)itemForAdamID:(id)arg1;	// IMP=0x000000000002de15
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x000000000002de0f
- (id)init;	// IMP=0x000000000002dda5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

