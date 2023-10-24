//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SIBCRequestMessage;

__attribute__((visibility("hidden")))
@interface SIBCConnectionRequest : NSObject
{
    CDUnknownBlockType _responseHandler;	// 8 = 0x8
    id <SIBCRequestMessage> _message;	// 16 = 0x10
}

+ (id)requestWithMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000013e9b
- (void).cxx_destruct;	// IMP=0x000000000001419c
@property(readonly, nonatomic) id <SIBCRequestMessage> message; // @synthesize message=_message;
- (id)description;	// IMP=0x000000000001410a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013fdf
- (void)invokeWithError:(id)arg1;	// IMP=0x0000000000013f78
- (void)invokeWithResponseMessage:(id)arg1;	// IMP=0x0000000000013f11
- (id)initWithMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013df6

@end

