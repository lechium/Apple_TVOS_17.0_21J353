//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHContinuityTracker : NSObject
{
}

+ (long long)mergePolicyToSignatureAlignmentMergeMode:(long long)arg1;	// IMP=0x008000000001703b
+ (id)buildSignatureAlignment:(id)arg1;	// IMP=0x0080000000016f19
+ (id)trackQuerySignature:(id)arg1 inReferenceSignature:(id)arg2 usingMergePolicy:(long long)arg3 error:(id *)arg4;	// IMP=0x0080000000016ab2
+ (id)trackQuerySignature:(id)arg1 inReferenceSignature:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000016a97

@end

