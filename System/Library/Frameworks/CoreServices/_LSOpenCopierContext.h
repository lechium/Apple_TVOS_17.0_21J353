//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface _LSOpenCopierContext : NSObject
{
    int _callbackType;	// 8 = 0x8
    NSURL *_destURL;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ec98c
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *destURL; // @synthesize destURL=_destURL;
@property(nonatomic) int callbackType; // @synthesize callbackType=_callbackType;

@end

