//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CLClientManagerUsageSyncMessage : NSObject
{
    NSString *_messageType;	// 8 = 0x8
    NSDictionary *_dataPayload;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    NSDictionary *_idsOptions;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSDictionary *dataPayload; // @synthesize dataPayload=_dataPayload;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (_Bool)isMessageOfType:(id)arg1;	// IMP=0x00100000004cf93e
- (void)dealloc;	// IMP=0x00100000004cf8da

@end

