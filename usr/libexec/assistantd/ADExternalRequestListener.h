//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext;
@protocol OS_xpc_object;

@interface ADExternalRequestListener : NSObject
{
    NSObject<OS_xpc_object> *_externalRequestListener;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000010fdb6
- (void)listen;	// IMP=0x001000000010fd29
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x001000000010fc9a
- (id)init;	// IMP=0x001000000010fc40

@end

