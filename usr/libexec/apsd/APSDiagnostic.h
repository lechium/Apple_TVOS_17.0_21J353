//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface APSDiagnostic : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000098e97
- (void).cxx_destruct;	// IMP=0x0020000000098f93
- (void)promptTapToRadarWithURL:(id)arg1;	// IMP=0x0010000000098f8d
- (id)init;	// IMP=0x0010000000098ef7

@end

