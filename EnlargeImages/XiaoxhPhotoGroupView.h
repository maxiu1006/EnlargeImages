//
//  XiaoxhPhotoGroupView.h
//  EnlargeImages
//
//  Created by xiaoxh on 2019/6/9.
//  Copyright © 2019 maxiu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XiaoxhPhotoGroupItem : NSObject
@property (nonatomic, strong) UIView* thumbView;
@property (nonatomic, assign) CGSize largeImageSize;
@property (nonatomic, strong) NSURL* largeImageURL;
@end


@interface XiaoxhPhotoGroupView : UIView
@property (nonatomic, readonly) NSArray* groupItems;
@property (nonatomic, readonly) NSInteger currentPage;
@property (nonatomic, assign) BOOL blurEffectBackground;

- (instancetype)init UNAVAILABLE_ATTRIBUTE;
- (instancetype)initWithFrame:(CGRect)frame UNAVAILABLE_ATTRIBUTE;
+ (instancetype) new UNAVAILABLE_ATTRIBUTE;
- (instancetype)initWithGroupItems:(NSArray*)groupItems;

- (void)presentFromImageView:(UIView*)fromView
                 toContainer:(UIView*)container
                    animated:(BOOL)animated
                  completion:(void (^)(void))completion;

- (void)dismissAnimated:(BOOL)animated completion:(void (^)(void))completion;
- (void)dismiss;
@end

