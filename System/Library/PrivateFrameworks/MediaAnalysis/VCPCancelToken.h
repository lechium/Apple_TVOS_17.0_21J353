//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCancelToken : NSObject
{
    struct atomic<bool> _canceled;	// 8 = 0x8
}

- (_Bool)isCanceled;	// IMP=0x000000000022da4b
- (void)cancel;	// IMP=0x000000000022da40

@end

