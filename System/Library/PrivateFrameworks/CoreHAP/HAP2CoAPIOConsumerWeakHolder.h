//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HAP2CoAPIOConsumer;

__attribute__((visibility("hidden")))
@interface HAP2CoAPIOConsumerWeakHolder : NSObject
{
    id <HAP2CoAPIOConsumer> _consumer;	// 8 = 0x8
}

+ (id)new;	// IMP=0x0060000000154526
- (void).cxx_destruct;	// IMP=0x0000000000154518
@property(readonly, nonatomic) __weak id <HAP2CoAPIOConsumer> consumer; // @synthesize consumer=_consumer;
- (id)initWithConsumer:(id)arg1;	// IMP=0x000000000015449e
- (id)init;	// IMP=0x00000000001543f6

@end

