//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class MLSequence;

__attribute__((visibility("hidden")))
@interface MLSequnceAsFeatureValueArray : NSArray
{
    MLSequence *_sequence;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000115e2d
@property(readonly, nonatomic) MLSequence *sequence; // @synthesize sequence=_sequence;
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000115d5f
- (unsigned long long)count;	// IMP=0x0000000000115d10
- (id)initWrappingSequence:(id)arg1;	// IMP=0x0000000000115ca2

@end

