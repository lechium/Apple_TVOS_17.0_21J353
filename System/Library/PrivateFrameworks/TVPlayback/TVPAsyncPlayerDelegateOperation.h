//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface TVPAsyncPlayerDelegateOperation : NSObject
{
    NSNumber *_identifier;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000971c
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x00000000000096b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009601
- (id)init;	// IMP=0x0000000000009589

@end

