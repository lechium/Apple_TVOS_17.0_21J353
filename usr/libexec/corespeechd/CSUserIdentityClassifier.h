//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSUserIdentityClassifier : NSObject
{
}

+ (id);	// IMP=0x00400000000066fe
+ (unsigned long long)classifyUserIdentityFor:(id)arg1 withScores:(id)arg2 withAsset:(id)arg3 withPhId:(unsigned long long)arg4;	// IMP=0x0010000000006608
+ (unsigned long long)classifyUserIdentityFor:(id)arg1 withScores:(id)arg2 lowScoreThreshold:(long long)arg3 highScoreThreshold:(long long)arg4 confidentThreshold:(long long)arg5 scoreDiffThreshold:(long long)arg6;	// IMP=0x001000000000638f
+ (id)pickTopScoringProfileIdFromScores:(id)arg1;	// IMP=0x001000000000613a

@end
