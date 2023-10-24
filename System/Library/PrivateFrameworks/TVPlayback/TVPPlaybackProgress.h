//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVPPlaybackProgress : NSObject
{
    NSString *_firstTitle;	// 8 = 0x8
    NSString *_currentTitle;	// 16 = 0x10
    NSString *_lastTitle;	// 24 = 0x18
    double _progress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000014f61
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *lastTitle; // @synthesize lastTitle=_lastTitle;
@property(copy, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
@property(copy, nonatomic) NSString *firstTitle; // @synthesize firstTitle=_firstTitle;
- (id)init;	// IMP=0x0000000000014ebe

@end
