//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLResult;

__attribute__((visibility("hidden")))
@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject
{
    AMSURLResult *_result;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000052c8f
@property(retain, nonatomic) AMSURLResult *result; // @synthesize result=_result;
- (id)_parseOffsetFromMetaBag;	// IMP=0x000000000005298c
- (id)_parseTotalFromMetaBag;	// IMP=0x0000000000052899
- (id)parseAMSURLResult:(id)arg1;	// IMP=0x0000000000052753
- (id)init;	// IMP=0x00000000000526f0

@end

