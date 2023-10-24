//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GTMTLCaptureScopeInfo : NSObject
{
}

+ (id)getInfoWithAddress:(unsigned long long)arg1;	// IMP=0x00800000000384ab
+ (id)getInfoWithStreamRef:(unsigned long long)arg1;	// IMP=0x00800000000383fe
+ (void)updateAll;	// IMP=0x00800000000383c4
+ (void)removeScope:(id)arg1;	// IMP=0x0080000000038309
+ (void)addScope:(id)arg1;	// IMP=0x0080000000038253
+ (void)sendAll:(struct os_unfair_lock_s *)arg1;	// IMP=0x008000000003805d
+ (id)allCaptureScopes;	// IMP=0x0080000000037e34
+ (void)initialize;	// IMP=0x0080000000037dcb

@end

