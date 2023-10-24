//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, NSURLRequest, NSUUID;
@protocol NSURLSessionTaskDelegate, __NSURLSessionTaskGroupForConfiguration;

@interface __NSCFTaskForClass : NSObject
{
    Class cl;	// 8 = 0x8
    NSURLRequest *request;	// 16 = 0x10
    NSUUID *uniqueIdentifier;	// 24 = 0x18
    NSURL *uploadFile;	// 32 = 0x20
    NSData *bodyData;	// 40 = 0x28
    CDUnknownBlockType completion;	// 48 = 0x30
    NSString *downloadFilePath;	// 56 = 0x38
    NSData *resumeData;	// 64 = 0x40
    CDUnknownBlockType downloadCompletion;	// 72 = 0x48
    id <NSURLSessionTaskDelegate> delegate;	// 80 = 0x50
    id <__NSURLSessionTaskGroupForConfiguration> _group;	// 88 = 0x58
}

- (void)dealloc;	// IMP=0x0000000000003d64

@end

