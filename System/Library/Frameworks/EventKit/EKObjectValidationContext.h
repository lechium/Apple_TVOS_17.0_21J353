//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKObject;

__attribute__((visibility("hidden")))
@interface EKObjectValidationContext : NSObject
{
    _Bool _reachedMaxDepth;	// 8 = 0x8
    EKObject *_rootObject;	// 16 = 0x10
    unsigned long long _depth;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b18dd
@property(nonatomic) _Bool reachedMaxDepth; // @synthesize reachedMaxDepth=_reachedMaxDepth;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) EKObject *rootObject; // @synthesize rootObject=_rootObject;
- (void)faultIfNeededForObject:(id)arg1;	// IMP=0x00000000000b1824
- (id)initWithRootObject:(id)arg1;	// IMP=0x00000000000b17b9

@end

