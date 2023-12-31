//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKDURLSessionPool : NSObject
{
    int _backgroundSessionConnectionPoolLimit;	// 8 = 0x8
}

+ (id)backgroundSessionConnectionPoolName;	// IMP=0x0060000000302854
+ (id)sharedURLSessionPool;	// IMP=0x00600000003027ef
@property(readonly, nonatomic) int backgroundSessionConnectionPoolLimit;
- (void)_updateBackgroundSessionConnectionPoolLimit;	// IMP=0x00000000003028ad
- (id)initInternal;	// IMP=0x0000000000302861

@end

