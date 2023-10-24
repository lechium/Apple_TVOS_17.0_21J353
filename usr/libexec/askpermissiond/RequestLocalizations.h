//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RequestLocalizations : NSObject
{
    NSString *_approve;	// 8 = 0x8
    NSString *_body;	// 16 = 0x10
    NSString *_decline;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000027ef9
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *decline; // @synthesize decline=_decline;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *approve; // @synthesize approve=_approve;
- (id)description;	// IMP=0x0010000000027e72
- (id)compile;	// IMP=0x0010000000027d2a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000027b4f
- (id)initWithApprove:(id)arg1 body:(id)arg2 decline:(id)arg3 title:(id)arg4;	// IMP=0x00100000000279c4

@end

