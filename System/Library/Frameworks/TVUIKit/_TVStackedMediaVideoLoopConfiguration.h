//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVStackedMediaVideoLoopConfiguration : NSObject
{
    long long _loopType;	// 8 = 0x8
    CDStruct_1b6d18a9 _loopStart;	// 16 = 0x10
}

+ (long long)_loopTypeForLoopTypeString:(id)arg1;	// IMP=0x006000000001e24d
@property(nonatomic) CDStruct_1b6d18a9 loopStart; // @synthesize loopStart=_loopStart;
@property(nonatomic) long long loopType; // @synthesize loopType=_loopType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001e323

@end

