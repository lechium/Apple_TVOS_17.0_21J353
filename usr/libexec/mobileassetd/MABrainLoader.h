//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MABrainLoader : NSObject
{
    NSMutableDictionary *_history;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000019a2
- (void).cxx_destruct;	// IMP=0x0020000000001d9e
- (int)run:(int)arg1 argv:(char **)arg2;	// IMP=0x0010000000001c61
- (int)run:(int)arg1 argv:(char **)arg2 info:(id)arg3 path:(const char *)arg4;	// IMP=0x00100000000019f7

@end

