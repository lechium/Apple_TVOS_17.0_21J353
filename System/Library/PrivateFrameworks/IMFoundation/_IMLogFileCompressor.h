//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject
{
    NSMutableArray *_archivers;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0010000000030d91
- (void).cxx_destruct;	// IMP=0x0000000000031027
- (void)fileCopierDidFinish:(id)arg1;	// IMP=0x0000000000030f69
- (void)fileCopierDidStart:(id)arg1;	// IMP=0x0000000000030f63
- (void)compressPath:(id)arg1 toPath:(id)arg2;	// IMP=0x0000000000030e3c
- (id)init;	// IMP=0x0000000000030de6

@end

