//
//  ViewController.m
//  EnlargeImages
//
//  Created by xiaoxh on 2019/6/9.
//  Copyright © 2019 maxiu. All rights reserved.
//

#import "ViewController.h"
#import "XiaoxhPhotoGroupView.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *myInageView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
}

- (IBAction)click:(UIButton *)sender {
    
    NSArray *imageArr = @[@"maxiu"];
    NSMutableArray* items = [[NSMutableArray alloc] init];
    for (NSUInteger i = 0; i < imageArr.count; i++) {
        XiaoxhPhotoGroupItem* item = [[XiaoxhPhotoGroupItem alloc] init];
        item.thumbView = self.myInageView;
        if(imageArr.count > i) {
            item.largeImageURL = [NSURL URLWithString:imageArr[i]];
        }
        [items addObject:item];
    }
    XiaoxhPhotoGroupView* v = [[XiaoxhPhotoGroupView alloc] initWithGroupItems:items];
    [v presentFromImageView:self.myInageView toContainer:self.view.window animated:YES completion:nil];
}

@end
