//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IXUninstallOptions : NSObject
{
    _Bool _requestUserConfirmation;	// 8 = 0x8
    _Bool _waitForDeletion;	// 9 = 0x9
    _Bool _showArchiveOption;	// 10 = 0xa
    _Bool _showDemotionOption;	// 11 = 0xb
    _Bool _systemAppNotAllowed;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000005d85
@property(nonatomic) _Bool systemAppNotAllowed; // @synthesize systemAppNotAllowed=_systemAppNotAllowed;
@property(nonatomic) _Bool showDemotionOption; // @synthesize showDemotionOption=_showDemotionOption;
@property(nonatomic) _Bool showArchiveOption; // @synthesize showArchiveOption=_showArchiveOption;
@property(nonatomic) _Bool waitForDeletion; // @synthesize waitForDeletion=_waitForDeletion;
@property(nonatomic) _Bool requestUserConfirmation; // @synthesize requestUserConfirmation=_requestUserConfirmation;
- (id)description;	// IMP=0x001000000000643b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000005ffd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000005f22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000005e46
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000005d8d
- (id)init;	// IMP=0x0010000000005cf3

@end

