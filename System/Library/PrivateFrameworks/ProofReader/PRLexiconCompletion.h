//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRLexiconCompletion : NSObject
{
    unsigned int _tokenID;	// 8 = 0x8
    double _score;	// 16 = 0x10
}

@property(readonly) double score; // @synthesize score=_score;
@property(readonly) unsigned int tokenID; // @synthesize tokenID=_tokenID;
- (id)description;	// IMP=0x00000000000621eb
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2;	// IMP=0x00000000000621a1

@end

