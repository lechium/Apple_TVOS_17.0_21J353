//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface NAFlatMapEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;	// 8 = 0x8
    CDUnknownBlockType _map;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000435a
@property(readonly, copy, nonatomic) CDUnknownBlockType map; // @synthesize map=_map;
@property(readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
- (id)allObjects;	// IMP=0x0000000000004291
- (id)nextObject;	// IMP=0x00000000000041ee
- (id)initWithEnumerator:(id)arg1 map:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004139

@end

