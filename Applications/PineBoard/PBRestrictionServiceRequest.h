//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface PBRestrictionServiceRequest : NSObject
{
    _Bool _allowInteraction;	// 8 = 0x8
    NSUUID *_token;	// 16 = 0x10
    unsigned long long _requestType;	// 24 = 0x18
    unsigned long long _restrictionContentType;	// 32 = 0x20
    unsigned long long _restrictedSettingType;	// 40 = 0x28
    NSNumber *_rating;	// 48 = 0x30
    CDUnknownBlockType _serviceRequestCompletionBlock;	// 56 = 0x38
    CDUnknownBlockType _resultHandler;	// 64 = 0x40
    NSString *_PIN;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000262cc
@property(copy, nonatomic) NSString *PIN; // @synthesize PIN=_PIN;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(copy, nonatomic) CDUnknownBlockType serviceRequestCompletionBlock; // @synthesize serviceRequestCompletionBlock=_serviceRequestCompletionBlock;
@property(nonatomic) _Bool allowInteraction; // @synthesize allowInteraction=_allowInteraction;
@property(copy, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(nonatomic) unsigned long long restrictedSettingType; // @synthesize restrictedSettingType=_restrictedSettingType;
@property(nonatomic) unsigned long long restrictionContentType; // @synthesize restrictionContentType=_restrictionContentType;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) NSUUID *token; // @synthesize token=_token;
- (id)description;	// IMP=0x001000000002617b
- (unsigned long long)hash;	// IMP=0x0010000000026164
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002605d
- (id)initWithToken:(id)arg1 requestType:(unsigned long long)arg2;	// IMP=0x0010000000025fe6
- (id)initWithToken:(id)arg1;	// IMP=0x0010000000025fd1
- (id)init;	// IMP=0x0010000000025fc3

@end

