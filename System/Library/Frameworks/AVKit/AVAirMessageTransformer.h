//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface AVAirMessageTransformer
{
    NSData *_previousUnusedData;	// 8 = 0x8
    Class _messageClass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000a99e
@property(readonly, nonatomic) Class messageClass; // @synthesize messageClass=_messageClass;
- (id)reverseTransformerForMessageData:(id)arg1;	// IMP=0x000000000000a7e9
- (id)dataForMessage:(id)arg1;	// IMP=0x000000000000a648
- (void)resetState;	// IMP=0x000000000000a627
- (id)initWithMessageClass:(Class)arg1;	// IMP=0x000000000000a5d2

@end

