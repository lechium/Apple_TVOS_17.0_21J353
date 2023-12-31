//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MTRReadClientContainer : NSObject
{
    void *_readClientPtr;	// 8 = 0x8
    struct AttributePathParams *_pathParams;	// 16 = 0x10
    struct EventPathParams *_eventPathParams;	// 24 = 0x18
    unsigned long long _deviceID;	// 32 = 0x20
}

@property(nonatomic) unsigned long long deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) struct EventPathParams *eventPathParams; // @synthesize eventPathParams=_eventPathParams;
@property(nonatomic) struct AttributePathParams *pathParams; // @synthesize pathParams=_pathParams;
@property(nonatomic) void *readClientPtr; // @synthesize readClientPtr=_readClientPtr;
- (void)dealloc;	// IMP=0x000000000007036f
- (void)onDone;	// IMP=0x0000000000070190

@end

